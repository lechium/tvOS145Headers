/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MRProtocolMessageLogger : NSObject {

	BOOL _shouldLog;
	BOOL _shouldVerboselyLog;

}

@property (assign,nonatomic) BOOL shouldLog;                       //@synthesize shouldLog=_shouldLog - In the implementation block
@property (assign,nonatomic) BOOL shouldVerboselyLog;              //@synthesize shouldVerboselyLog=_shouldVerboselyLog - In the implementation block
+(id)sharedLogger;
-(id)init;
-(BOOL)shouldLog;
-(void)logMessage:(id)arg1 client:(id)arg2 protocolMessage:(id)arg3 ;
-(void)setShouldLog:(BOOL)arg1 ;
-(void)setShouldVerboselyLog:(BOOL)arg1 ;
-(BOOL)shouldVerboselyLog;
@end

