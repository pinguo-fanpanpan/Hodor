//
//  UIViewController+ext.h
//  Hodor
//
//  Created by pengpingguo on 16/5/13.
//  Copyright © 2016年 zhangchutian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (ext)
/**
 *  pop to a view controller of some kind of class
 *
 *  @param klass    class
 *  @param animated animated
 *
 *  @return did find any view controller
 */
- (BOOL)hPopToViewControllerOfClass:(Class)klass animated:(BOOL)animated;

@end
