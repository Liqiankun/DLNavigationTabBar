//
//  DLNavigationTabBar.h
//  DLNavigationTabBar
//
//  Created by FT_David on 2016/12/4.
//  Copyright © 2016年 FT_David. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^TabBarDidClickAtIndex)(NSInteger buttonIndex);

@interface DLNavigationTabBar : UIView
@property(nonatomic,copy)TabBarDidClickAtIndex didClickAtIndex;
-(instancetype)initWithTitles:(NSArray *)titles;
-(void)scrollToIndex:(NSInteger)index;
@property(nonatomic,strong)UIColor *sliderBackgroundColor;
@property(nonatomic,strong)UIColor *buttonNormalTitleColor;
@property(nonatomic,strong)UIColor *buttonSelectedTileColor;

@end
