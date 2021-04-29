/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTRowAction.h>

@interface PTUIPresentViewControllerRowAction : PTRowAction {

	/*^block*/id _viewControllerCreator;

}

@property (nonatomic,readonly) id viewControllerCreator;              //@synthesize viewControllerCreator=_viewControllerCreator - In the implementation block
+(id)actionWithViewControllerCreator:(/*^block*/id)arg1 ;
-(/*^block*/id)defaultHandler;
-(BOOL)deselectsRowOnSuccess;
-(id)viewControllerCreator;
@end

