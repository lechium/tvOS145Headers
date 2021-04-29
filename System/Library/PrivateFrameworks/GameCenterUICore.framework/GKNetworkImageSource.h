/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUICore/GKImageSource.h>

@class NSMutableDictionary;

@interface GKNetworkImageSource : GKImageSource {

	NSMutableDictionary* _loadingGroups;

}

@property (nonatomic,retain) NSMutableDictionary * loadingGroups;              //@synthesize loadingGroups=_loadingGroups - In the implementation block
-(void)loadImageForURLString:(id)arg1 loader:(/*^block*/id)arg2 reference:(id)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)loadImageForURLString:(id)arg1 reference:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)loadAndCacheAvatarFromGamedForURLString:(id)arg1 useUIImage:(BOOL)arg2 cacheSubdirectory:(id)arg3 reference:(id)arg4 queue:(id)arg5 handler:(/*^block*/id)arg6 ;
-(NSMutableDictionary *)loadingGroups;
-(void)setLoadingGroups:(NSMutableDictionary *)arg1 ;
-(BOOL)imageNeedsRefresh:(id)arg1 ;
@end

