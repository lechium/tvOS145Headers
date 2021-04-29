/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VCAudioRule : NSObject {

	int _payload;
	BOOL _isSecondary;
	BOOL _sbr;
	unsigned _samplesPerBlock;
	unsigned long long _hash;

}

@property (nonatomic,readonly) int payload;                           //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) BOOL isSecondary;                      //@synthesize isSecondary=_isSecondary - In the implementation block
@property (nonatomic,readonly) BOOL sbr;                              //@synthesize sbr=_sbr - In the implementation block
@property (nonatomic,readonly) unsigned samplesPerBlock;              //@synthesize samplesPerBlock=_samplesPerBlock - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(int)payload;
-(id)initWithPayload:(int)arg1 isSecondary:(BOOL)arg2 sbr:(BOOL)arg3 samplesPerBlock:(unsigned)arg4 ;
-(BOOL)isSecondary;
-(BOOL)sbr;
-(unsigned)samplesPerBlock;
@end

