import unittest

import bfs

class TestBFS(unittest.TestCase):
    def test_dbfs(self):
        res1 = bfs.basic_dbfs({
            1:(2,3,4,),
            2:(1,3,),
            3:(1,2,),
            4:(1,5,8,),
            5:(4,6,7,),
            6:(5,7,8,9,),
            7:(5,6,),
            8:(4,6,9,),
            9:(6,8,10),
            10:(9,),
        })
        res2=[1, 2, 3, 4, 5, 8, 6, 7, 9, 10]
        self.assertTrue(res1==res2)
        
if __name__ == "__main__":
    unittest.main(verbosity=2)