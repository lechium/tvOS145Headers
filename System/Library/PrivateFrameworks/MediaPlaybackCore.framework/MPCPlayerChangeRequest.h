/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface MPCPlayerChangeRequest : NSObject {

	unsigned long long _options;
	NSArray* _commands;

}

@property (nonatomic,retain) NSArray * commands;                      //@synthesize commands=_commands - In the implementation block
@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
+(void)performRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)performRequest:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
+(id)requestWithCommandRequests:(id)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCommandRequests:(id)arg1 ;
@end

