cmake_minimum_required(VERSION 3.13)
project(untitled6)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled6 main.cpp Command.h Expression.h Number.h BinaryExpression.h Mul.h Div.h Plus.h Minus.h UnaryExpression.h Neg.h Plus.cpp Neg.cpp Mul.cpp Minus.cpp Div.cpp Interpeter.h Command.cpp OpenSeverCommand.cpp ConnectCommand.cpp DefiveVarCommand.cpp ConnectCommand.h DefiveVarCommand.h OpenSeverCommand.h Bind.h Bind.cpp If.cpp If.h While.cpp While.h Sleep.cpp Sleep.h Print.h Print.cpp)