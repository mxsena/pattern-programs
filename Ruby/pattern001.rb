=begin
―――――――― PATTERN 001

.       * * * * *
.       * * * * *
.       * * * * *
.       * * * * *
.       * * * * *

――――――――――――――――――――
=end

def create_pattern(rows, columns)
    for row in 1..rows do
      for column in 1..columns do
        print "* "
      end
      puts
    end
  end
  
  create_pattern(5, 5)