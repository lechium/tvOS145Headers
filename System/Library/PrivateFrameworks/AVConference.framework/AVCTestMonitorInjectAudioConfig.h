/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface AVCTestMonitorInjectAudioConfig : NSObject {

	int _injectAudioConfigType;
	double _amplitude;
	NSString* _audioFileName;

}

@property (assign,nonatomic) int injectAudioConfigType;              //@synthesize injectAudioConfigType=_injectAudioConfigType - In the implementation block
@property (assign,nonatomic) double amplitude;                       //@synthesize amplitude=_amplitude - In the implementation block
@property (assign,nonatomic) NSString * audioFileName;               //@synthesize audioFileName=_audioFileName - In the implementation block
-(void)setAudioFileName:(NSString *)arg1 ;
-(NSString *)audioFileName;
-(int)injectAudioConfigType;
-(void)setInjectAudioConfigType:(int)arg1 ;
-(double)amplitude;
-(void)setAmplitude:(double)arg1 ;
@end

