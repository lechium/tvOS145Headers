/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RTPersistenceMirroringRequestDelegate <NSObject>
@optional
-(void)mirroringRequestDidBegin:(id)arg1;

@required
-(BOOL)mirroringRequest:(id)arg1 didFailWithError:(id)arg2;
-(void)mirroringRequestDidSucceed:(id)arg1;

@end
