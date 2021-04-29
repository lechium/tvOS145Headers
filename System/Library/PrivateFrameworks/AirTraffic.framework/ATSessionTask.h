/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirTraffic/AirTraffic-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSArray, NSDictionary, NSError, ATSession;

@interface ATSessionTask : NSObject <NSSecureCoding, NSCopying> {

	BOOL _finished;
	BOOL _running;
	BOOL _cancelled;
	BOOL _suspended;
	NSString* _sessionTaskIdentifier;
	NSString* _sessionGroupingKey;
	NSString* _localizedDescription;
	NSString* _dataClass;
	double _progress;
	unsigned long long _totalItemCount;
	unsigned long long _completedItemCount;
	NSNumber* _totalBytesToTransfer;
	NSNumber* _totalBytesTransferred;
	NSArray* _currentItemDescriptions;
	NSArray* _currentItems;
	NSArray* _recentlyFailedAssets;
	NSDictionary* _properties;
	NSError* _error;
	ATSession* _session;
	double _startTime;
	double _finishTime;

}

@property (getter=isRunning) BOOL running;                             //@synthesize running=_running - In the implementation block
@property (getter=isFinished) BOOL finished;                           //@synthesize finished=_finished - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                         //@synthesize cancelled=_cancelled - In the implementation block
@property (getter=isSuspended) BOOL suspended;                         //@synthesize suspended=_suspended - In the implementation block
@property (__weak) ATSession * session;                                //@synthesize session=_session - In the implementation block
@property (copy) NSString * sessionTaskIdentifier;                     //@synthesize sessionTaskIdentifier=_sessionTaskIdentifier - In the implementation block
@property (copy) NSString * localizedDescription;                      //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (copy) NSString * sessionGroupingKey;                        //@synthesize sessionGroupingKey=_sessionGroupingKey - In the implementation block
@property (copy) NSString * dataClass;                                 //@synthesize dataClass=_dataClass - In the implementation block
@property (assign) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (assign) unsigned long long totalItemCount;                  //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (assign) unsigned long long completedItemCount;              //@synthesize completedItemCount=_completedItemCount - In the implementation block
@property (copy) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (copy) NSArray * currentItemDescriptions;                    //@synthesize currentItemDescriptions=_currentItemDescriptions - In the implementation block
@property (copy) NSArray * currentItems;                               //@synthesize currentItems=_currentItems - In the implementation block
@property (copy) NSArray * recentlyFailedAssets;                       //@synthesize recentlyFailedAssets=_recentlyFailedAssets - In the implementation block
@property (copy) NSDictionary * properties;                            //@synthesize properties=_properties - In the implementation block
@property (copy) NSNumber * totalBytesToTransfer;                      //@synthesize totalBytesToTransfer=_totalBytesToTransfer - In the implementation block
@property (copy) NSNumber * totalBytesTransferred;                     //@synthesize totalBytesTransferred=_totalBytesTransferred - In the implementation block
@property (assign) double startTime;                                   //@synthesize startTime=_startTime - In the implementation block
@property (assign) double finishTime;                                  //@synthesize finishTime=_finishTime - In the implementation block
@property (readonly) double duration; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)cancel;
-(ATSession *)session;
-(void)setSuspended:(BOOL)arg1 ;
-(double)startTime;
-(void)setError:(NSError *)arg1 ;
-(void)start;
-(NSDictionary *)properties;
-(double)progress;
-(void)setStartTime:(double)arg1 ;
-(BOOL)isCancelled;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isSuspended;
-(BOOL)isRunning;
-(double)duration;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)_start;
-(void)setSession:(ATSession *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setTotalBytesTransferred:(NSNumber *)arg1 ;
-(NSNumber *)totalBytesTransferred;
-(void)setRunning:(BOOL)arg1 ;
-(NSString *)dataClass;
-(void)setFinishTime:(double)arg1 ;
-(unsigned long long)totalItemCount;
-(void)setDataClass:(NSString *)arg1 ;
-(void)setTotalItemCount:(unsigned long long)arg1 ;
-(NSString *)sessionTaskIdentifier;
-(NSString *)sessionGroupingKey;
-(id)baseClassRepresentation;
-(double)finishTime;
-(id)initWithDataClass:(id)arg1 ;
-(void)setSessionTaskIdentifier:(NSString *)arg1 ;
-(void)setSessionGroupingKey:(NSString *)arg1 ;
-(unsigned long long)completedItemCount;
-(void)setCompletedItemCount:(unsigned long long)arg1 ;
-(NSArray *)currentItemDescriptions;
-(void)setCurrentItemDescriptions:(NSArray *)arg1 ;
-(NSArray *)currentItems;
-(void)setCurrentItems:(NSArray *)arg1 ;
-(NSArray *)recentlyFailedAssets;
-(void)setRecentlyFailedAssets:(NSArray *)arg1 ;
-(NSNumber *)totalBytesToTransfer;
-(void)setTotalBytesToTransfer:(NSNumber *)arg1 ;
@end

