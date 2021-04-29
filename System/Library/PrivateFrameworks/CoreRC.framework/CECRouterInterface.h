/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CECInterface.h>

@class CECRouter;

@interface CECRouterInterface : CECInterface {

	CECRouter* _router;

}
-(void)dealloc;
-(id)properties;
-(BOOL)sendFrame:(CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(void)receivedFrame:(CECFrame)arg1 ;
-(BOOL)setAddressMask:(unsigned short)arg1 error:(id*)arg2 ;
-(BOOL)setPromiscMode:(BOOL)arg1 error:(id*)arg2 ;
-(id)initWithRouter:(id)arg1 ;
@end

