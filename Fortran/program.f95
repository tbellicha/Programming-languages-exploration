! FILEPATH: /home/btanguy/CSUSM/CS/S2/CS351/Fortran/program.f

module functions_module
  contains
  integer function add_int(a, b)
    integer, intent(in) :: a, b
    add_int = a + b
  end function add_int

  real function add_real(a, b)
    real, intent(in) :: a, b
    add_real = a + b
  end function add_real

  character(len=100) function concat(a, b)
    character(len=*), intent(in) :: a, b
  if (len(trim(a)) + len(trim(b)) > 100) then
    print *, "Error: Resulting string is too long."
    concat = ""
  else
    concat = trim(a) // trim(b)
  end if
  end function concat

  subroutine do_loop(n)
    integer, intent(in) :: n
    integer :: i
    do i = 1, n
      print *, i
    end do
  end subroutine do_loop

  subroutine do_while_loop(n)
    integer, intent(in) :: n
    integer :: i = 0
    do while (i <= n)
      print *, 2**i
      i = i + 1
    end do
  end subroutine do_while_loop
end module functions_module

program hello
  use functions_module
  integer :: i = 2
  character(len=5) :: class = "CS351"
  real :: x = 2.2
  character(len=100) :: result
  print *, "I'm glad you accepted me in ", class
  print *, "The sum of i and 8 is ", add_int(i, 8)
  print *, "The sum of x and 4 is ", add_real(x, 8.8)
  result = concat("Helloooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo", " World")
  result = concat("Hello", " World")
  print *, "Concatenation result: ", result
  print *, "Do loop"
  call do_loop(4)
  print *, "Do while loop"
  call do_while_loop(16)
end program hello