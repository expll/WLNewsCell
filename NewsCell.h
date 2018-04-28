//
//  NewsCell.h
//  FoldTableViewCellDemo
//
//  Created by Anchoriter on 2018/1/31.
//  Copyright © 2018年 Anchoriter. All rights reserved.
//

#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

#import <UIKit/UIKit.h>


@class NewsModel,NewsCell;

@protocol NewsCellCellDelegate <NSObject>
/**
 *  折叠按钮点击代理
 *
 *  @param cell 按钮所属cell
 */
- (void)clickFoldLabel:(NewsCell *)cell;

@end

@interface NewsCell : UITableViewCell
/** 数据模型 */
@property (nonatomic, strong) NewsModel *newsModel;

@property (nonatomic, weak) id<NewsCellCellDelegate> cellDelegate;

@end







