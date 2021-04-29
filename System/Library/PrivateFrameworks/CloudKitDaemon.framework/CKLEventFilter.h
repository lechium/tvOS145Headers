/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface CKLEventFilter : NSObject {

	BOOL _simulatorMessagesOnly;
	BOOL _onlyTestLogs;
	unsigned long long _logTypes;
	NSString* _processName;
	NSDictionary* _categoriesBySubsystem;

}

@property (assign,nonatomic) unsigned long long logTypes;                       //@synthesize logTypes=_logTypes - In the implementation block
@property (nonatomic,retain) NSDictionary * categoriesBySubsystem;              //@synthesize categoriesBySubsystem=_categoriesBySubsystem - In the implementation block
@property (nonatomic,retain) NSString * processName;                            //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic) BOOL simulatorMessagesOnly;                        //@synthesize simulatorMessagesOnly=_simulatorMessagesOnly - In the implementation block
@property (assign,nonatomic) BOOL onlyTestLogs;                                 //@synthesize onlyTestLogs=_onlyTestLogs - In the implementation block
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(id)initWithLogTypes:(unsigned long long)arg1 ;
-(void)setSimulatorMessagesOnly:(BOOL)arg1 ;
-(BOOL)simulatorMessagesOnly;
-(void)setOnlyTestLogs:(BOOL)arg1 ;
-(BOOL)onlyTestLogs;
-(BOOL)matchesEvent:(id)arg1 ;
-(unsigned long long)logTypes;
-(BOOL)hasLogType:(unsigned long long)arg1 ;
-(BOOL)hasOnlyLogType:(unsigned long long)arg1 ;
-(void)_initFilterDict;
-(void)setLogTypes:(unsigned long long)arg1 ;
-(NSDictionary *)categoriesBySubsystem;
-(void)setCategoriesBySubsystem:(NSDictionary *)arg1 ;
@end
