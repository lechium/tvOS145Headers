/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HangTracer.framework/HangTracer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HTFenceAssertion : NSObject {

	unsigned long long __name;
	unsigned long long __startTime;

}
-(void)invalidate;
-(id)initWithFenceName:(unsigned long long)arg1 ;
-(void)blown;
@end
