/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MessageAttachmentOverallStatus : NSObject {

	BOOL _failed;
	unsigned _error;

}

@property (assign) BOOL failed;                 //@synthesize failed=_failed - In the implementation block
@property (assign) unsigned error;              //@synthesize error=_error - In the implementation block
-(unsigned)error;
-(void)setError:(unsigned)arg1 ;
-(BOOL)failed;
-(void)setFailed:(BOOL)arg1 ;
@end

