/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlayerPath;

@interface MRAudioFadeMessage : MRProtocolMessage

@property (nonatomic,readonly) MRPlayerPath * playerPath; 
@property (nonatomic,readonly) long long fadeType; 
-(unsigned long long)type;
-(MRPlayerPath *)playerPath;
-(id)initWithPlayerPath:(id)arg1 fadeType:(long long)arg2 ;
-(long long)fadeType;
@end

