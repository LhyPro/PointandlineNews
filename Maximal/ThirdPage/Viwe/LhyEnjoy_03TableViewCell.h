//
//  LhyEnjoy_03TableViewCell.h
//  Maximal
//
//  Created by 李宏远 on 15/11/12.
//  Copyright © 2015年 李宏远. All rights reserved.
//

#import <UIKit/UIKit.h>
@class LhyEnjoy_Main_ItemsModel;

@interface LhyEnjoy_03TableViewCell : UITableViewCell
@property(nonatomic, retain)LhyEnjoy_Main_ItemsModel *model;
@property(nonatomic, retain)UILabel *labelTitle;
@property(nonatomic, retain)UILabel *labelIntro;

@end
