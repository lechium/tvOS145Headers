/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class CAPackage, NSArray;

@interface _UICAPackageView : UIView {

	CAPackage* _package;
	NSArray* _rootViews;

}
+(BOOL)_shouldCatchDecodingExceptions;
+(id)_newViewHierarchyFrom:(id)arg1 publishedObjectViewClassMap:(id)arg2 into:(id)arg3 ;
+(void)loadPackageViewWithObject:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadPackageViewWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)publishedObjectWithName:(id)arg1 ;
-(id)initWithData:(id)arg1 publishedObjectViewClassMap:(id)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 ;
-(id)publishedViewWithName:(id)arg1 ;
@end
