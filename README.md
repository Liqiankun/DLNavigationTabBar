![](https://github.com/Liqiankun/DLNavigationTabBar/raw/master/DLNavigationTabBar.png)
![](https://github.com/Liqiankun/DLNavigationTabBar/raw/master/DLNavigationTabBar.gif)
# How to use
Drag `NavigationTabBar` folder to your project. Then `#import "DLNavigationTabBar.h"`.<br>
```OC
 -(DLNavigationTabBar *)navigationTabBar
{
    if (!_navigationTabBar) {
        self.navigationTabBar = [[DLNavigationTabBar alloc] initWithTitles:@[@"粉色",@"蓝色",@"绿色"]];
        __weak typeof(self) weakSelf = self;
        [self.navigationTabBar setDidClickAtIndex:^(NSInteger index){
            [weakSelf navigationDidSelectedControllerIndex:index];
        }];
    }
    return _navigationTabBar;
}

- (void)viewDidLoad {
    [super viewDidLoad]; 
    self.navigationItem.titleView = self.navigationTabBar;  
}
```
For more details please check out the demo code.<br>
将`Lib`文件夹拖入你的的项目，然后`#import "DLNavigationTabBar.h"`。如果要了解更详细的内容请查看Demo中的代码。

#Requirements
- Xcode 7.0 or greater
- iOS8.0(manually only) or greater

#Author
David Lee, qiankunli@yahoo.com
