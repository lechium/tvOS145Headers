/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPCFuture;

@interface MPCFutureInvalidationToken : NSObject <NSCopying> {

	MPCFuture* _future;

}

@property (nonatomic,retain) MPCFuture * future;              //@synthesize future=_future - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPCFuture *)future;
-(void)setFuture:(MPCFuture *)arg1 ;
@end

