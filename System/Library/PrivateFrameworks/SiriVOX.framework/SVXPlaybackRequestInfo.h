/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SVXPlaybackRequestInfo : NSObject {

	BOOL _didStart;
	BOOL _didFinish;
	double _start;
	double _finish;

}

@property (assign,nonatomic) BOOL didStart;               //@synthesize didStart=_didStart - In the implementation block
@property (assign,nonatomic) BOOL didFinish;              //@synthesize didFinish=_didFinish - In the implementation block
@property (assign,nonatomic) double start;                //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double finish;               //@synthesize finish=_finish - In the implementation block
-(double)start;
-(double)duration;
-(double)finish;
-(void)setStart:(double)arg1 ;
-(BOOL)didFinish;
-(void)setDidFinish:(BOOL)arg1 ;
-(BOOL)didStart;
-(void)setDidStart:(BOOL)arg1 ;
-(void)setFinish:(double)arg1 ;
@end

