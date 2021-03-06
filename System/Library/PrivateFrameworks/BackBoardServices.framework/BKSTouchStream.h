/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BKSTouchStream : NSObject {

	unsigned _reference;

}

@property (assign) unsigned reference;              //@synthesize reference=_reference - In the implementation block
-(void)invalidate;
-(id)initWithContextID:(unsigned)arg1 displayUUID:(id)arg2 identifier:(unsigned char)arg3 policy:(id)arg4 ;
-(void)setEventDispatchMode:(unsigned char)arg1 lastTouchTimestamp:(double)arg2 ;
-(void)setEventDispatchMode:(unsigned char)arg1 ambiguityRecommendation:(unsigned char)arg2 lastTouchTimestamp:(double)arg3 ;
-(unsigned)reference;
-(void)setReference:(unsigned)arg1 ;
@end

