/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MPSectionedCollection, NSIndexPath;


@protocol MPCMediaRemoteMiddlewareModelObjectsProviding <NSObject>
@property (nonatomic,readonly) MPSectionedCollection * sourceContentItems; 
@property (nonatomic,readonly) MPSectionedCollection * modelObjects; 
@property (nonatomic,copy,readonly) NSIndexPath * playingIndexPath; 
@required
-(MPSectionedCollection *)modelObjects;
-(NSIndexPath *)playingIndexPath;
-(MPSectionedCollection *)sourceContentItems;

@end

