/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSObject, NSDate, BSSMO;

@interface RoamMO : NSManagedObject

@property (assign,nonatomic) short cacheChannel; 
@property (assign,nonatomic) short cacheRssiBin; 
@property (nonatomic,retain) NSObject * channelsScanned; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,nonatomic) BOOL displayOn; 
@property (assign,nonatomic) int fwReason; 
@property (assign,nonatomic) int fwSubReason; 
@property (nonatomic,retain) NSObject * histBcnPer; 
@property (nonatomic,retain) NSObject * histBcnSched; 
@property (nonatomic,retain) NSObject * histCca; 
@property (nonatomic,retain) NSObject * histFwTxFrames; 
@property (nonatomic,retain) NSObject * histFwTxPer; 
@property (nonatomic,retain) NSObject * histFwTxRetrans; 
@property (nonatomic,retain) NSObject * histRssi; 
@property (nonatomic,retain) NSObject * histRxFrames; 
@property (nonatomic,retain) NSObject * histSnr; 
@property (nonatomic,retain) NSObject * histTxFrames; 
@property (nonatomic,retain) NSObject * histTxPer; 
@property (nonatomic,retain) NSObject * histTxRetrans; 
@property (assign,nonatomic) int hostReason; 
@property (assign,nonatomic) BOOL isLateRoam; 
@property (assign,nonatomic) BOOL isPingPong; 
@property (assign,nonatomic) short motionState; 
@property (nonatomic,retain) NSObject * neighborCache; 
@property (assign,nonatomic) double roamLatencyMs; 
@property (assign,nonatomic) short sourceCca; 
@property (assign,nonatomic) short sourceRssi; 
@property (assign,nonatomic) int sourceScanLatencyMs; 
@property (assign,nonatomic) short sourceSnr; 
@property (assign,nonatomic) long long sourceTimeSpentSecs; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) short targetCca; 
@property (assign,nonatomic) BOOL targetDhcpFailed; 
@property (assign,nonatomic) int targetDhcpLatencyMs; 
@property (assign,nonatomic) int targetDhcpLeaseMins; 
@property (assign,nonatomic) short targetRssi; 
@property (assign,nonatomic) short targetSnr; 
@property (assign,nonatomic) BOOL userInteractive; 
@property (assign,nonatomic) BOOL voipActive; 
@property (nonatomic,retain) BSSMO * source; 
@property (nonatomic,retain) BSSMO * target; 
+(id)entityName;
+(id)fetchRequest;
@end

