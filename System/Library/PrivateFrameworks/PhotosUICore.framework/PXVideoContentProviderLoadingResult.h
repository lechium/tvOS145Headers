/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVPlayerItem, NSError, NSString;

@interface PXVideoContentProviderLoadingResult : NSObject {

	AVPlayerItem* _playerItem;
	NSError* _error;
	long long _priority;
	NSString* _resultDebugDescription;

}

@property (nonatomic,readonly) AVPlayerItem * playerItem;                      //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long priority;                             //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) NSString * resultDebugDescription;              //@synthesize resultDebugDescription=_resultDebugDescription - In the implementation block
-(id)description;
-(NSError *)error;
-(long long)priority;
-(AVPlayerItem *)playerItem;
-(id)initWithPlayerItem:(id)arg1 error:(id)arg2 priority:(long long)arg3 description:(id)arg4 ;
-(NSString *)resultDebugDescription;
@end
