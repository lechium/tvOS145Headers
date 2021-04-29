/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKLoadResourceOperation.h>

@class NSString, NSArray;

@interface GKLoadBundleResourceOperation : GKLoadResourceOperation {

	NSString* _resourceName;
	NSArray* _searchBundles;

}

@property (nonatomic,copy,readonly) NSString * resourceName;              //@synthesize resourceName=_resourceName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchBundles;              //@synthesize searchBundles=_searchBundles - In the implementation block
-(void)main;
-(NSString *)resourceName;
-(NSArray *)searchBundles;
-(id)initWithResourceName:(id)arg1 searchBundles:(id)arg2 ;
@end
