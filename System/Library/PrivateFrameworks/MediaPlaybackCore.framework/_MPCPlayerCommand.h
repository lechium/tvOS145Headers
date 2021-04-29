/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPCPlayerResponse, MPCPlayerPath;

@interface _MPCPlayerCommand : NSObject {

	MPCPlayerResponse* _response;
	MPCPlayerPath* _playerPath;

}

@property (nonatomic,readonly) MPCPlayerResponse * response;                 //@synthesize response=_response - In the implementation block
@property (nonatomic,copy,readonly) MPCPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(MPCPlayerResponse *)response;
-(id)initWithResponse:(id)arg1 ;
-(MPCPlayerPath *)playerPath;
-(id)initWithPlayerPath:(id)arg1 ;
@end
