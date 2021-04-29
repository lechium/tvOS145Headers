/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIDataSourceSnapshotter.h>

@class NSIndexSet;

@interface _UICollectionViewListSnapshotter : _UIDataSourceSnapshotter {

	NSIndexSet* _topSeparators;
	NSIndexSet* _bottomSeparators;
	BOOL _displaysAdditionalSeparators;

}

@property (nonatomic,readonly) BOOL displaysAdditionalSeparators;              //@synthesize displaysAdditionalSeparators=_displaysAdditionalSeparators - In the implementation block
+(id)snapshotterForSectionCountsProvider:(/*^block*/id)arg1 topBottomSeparatorProvider:(/*^block*/id)arg2 displaysAdditionalSeparators:(BOOL)arg3 ;
-(BOOL)displaysAdditionalSeparators;
-(id)initWithSectionCountsProvider:(/*^block*/id)arg1 topBottomSeparatorProvider:(/*^block*/id)arg2 displaysAdditionalSeparators:(BOOL)arg3 ;
-(BOOL)hasTopSeparatorInSection:(long long)arg1 ;
-(BOOL)hasBottomSeparatorInSection:(long long)arg1 ;
@end
