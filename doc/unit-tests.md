Compiling/running unit tests
------------------------------------

Unit tests will be automatically compiled if dependencies were met in configure
and tests weren't explicitly disabled.

After configuring, they can be run with 'make check'.

To run the CARDbuyersd tests manually, launch src/test/test_CARDbuyers .

To add more CARDbuyersd tests, add `BOOST_AUTO_TEST_CASE` functions to the existing
.cpp files in the test/ directory or add new .cpp files that
implement new BOOST_AUTO_TEST_SUITE sections.

To run the CARDbuyers-qt tests manually, launch src/qt/test/CARDbuyers-qt_test

To add more CARDbuyers-qt tests, add them to the `src/qt/test/` directory and
the `src/qt/test/test_main.cpp` file.
