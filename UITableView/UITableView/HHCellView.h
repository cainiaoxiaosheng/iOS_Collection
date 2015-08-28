//
//  HHCellView.h
//  UITableView
//
//  Created by liuxhui on 15/8/22.
//  Copyright (c) 2015年 HHL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HHModel.h"
@interface HHCellView : UIControl
@property (nonatomic, retain) UIImageView           *photoView;
@property (nonatomic, retain) UILabel               *titleLabel;
@property (nonatomic, retain) UILabel               *numberLabel;
@property (nonatomic, retain) UIButton              *deletaBtn;
@property (nonatomic, assign,readonly) CGFloat heigh;
- (void)model:(HHModel*)model;
@end
