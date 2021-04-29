/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRC/CoreIRLearningSession.h>

@class CoreRCManagerClient;

@interface CoreIRLearningSessionClient : CoreIRLearningSession {

	CoreRCManagerClient* _manager;

}

@property (assign,nonatomic) CoreRCManagerClient * manager;              //@synthesize manager=_manager - In the implementation block
-(CoreRCManagerClient *)manager;
-(void)setManager:(CoreRCManagerClient *)arg1 ;
-(void)endLearning;
-(BOOL)startLearningCommand:(unsigned long long)arg1 ;
@end

