/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSString;

@interface RBAssertionIntransientState : NSObject <NSCopying> {

	BOOL _invalidatesSynchronously;
	BOOL _isPersistent;
	BOOL _hasHereditaryGrant;
	BOOL _hasDomainAttribute;
	BOOL _definesRelativeStartTime;
	BOOL _terminateTargetOnOriginatorExit;
	BOOL _suspendsOnOriginatorSuspension;
	NSMutableSet* _sourceEnvironments;
	unsigned long long _runningReason;
	unsigned long long _legacyReason;
	NSString* _domainAttributes;
	unsigned long long _startPolicy;
	unsigned long long _endPolicy;
	double _invalidationDuration;
	double _warningDuration;

}

@property (assign,nonatomic) BOOL isPersistent;                                 //@synthesize isPersistent=_isPersistent - In the implementation block
@property (assign,nonatomic) BOOL hasHereditaryGrant;                           //@synthesize hasHereditaryGrant=_hasHereditaryGrant - In the implementation block
@property (assign,nonatomic) BOOL hasDomainAttribute;                           //@synthesize hasDomainAttribute=_hasDomainAttribute - In the implementation block
@property (assign,nonatomic) BOOL definesRelativeStartTime;                     //@synthesize definesRelativeStartTime=_definesRelativeStartTime - In the implementation block
@property (assign,nonatomic) BOOL terminateTargetOnOriginatorExit;              //@synthesize terminateTargetOnOriginatorExit=_terminateTargetOnOriginatorExit - In the implementation block
@property (assign,nonatomic) BOOL invalidatesSynchronously;                     //@synthesize invalidatesSynchronously=_invalidatesSynchronously - In the implementation block
@property (assign,nonatomic) unsigned long long startPolicy;                    //@synthesize startPolicy=_startPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long endPolicy;                      //@synthesize endPolicy=_endPolicy - In the implementation block
@property (assign,nonatomic) double invalidationDuration;                       //@synthesize invalidationDuration=_invalidationDuration - In the implementation block
@property (assign,nonatomic) double warningDuration;                            //@synthesize warningDuration=_warningDuration - In the implementation block
@property (nonatomic,readonly) NSMutableSet * sourceEnvironments;               //@synthesize sourceEnvironments=_sourceEnvironments - In the implementation block
@property (assign,nonatomic) unsigned long long runningReason;                  //@synthesize runningReason=_runningReason - In the implementation block
@property (assign,nonatomic) unsigned long long legacyReason;                   //@synthesize legacyReason=_legacyReason - In the implementation block
@property (nonatomic,retain) NSString * domainAttributes;                       //@synthesize domainAttributes=_domainAttributes - In the implementation block
@property (assign,nonatomic) BOOL suspendsOnOriginatorSuspension;               //@synthesize suspendsOnOriginatorSuspension=_suspendsOnOriginatorSuspension - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setIsPersistent:(BOOL)arg1 ;
-(BOOL)isPersistent;
-(void)setEndPolicy:(unsigned long long)arg1 ;
-(unsigned long long)endPolicy;
-(double)invalidationDuration;
-(void)setInvalidationDuration:(double)arg1 ;
-(double)warningDuration;
-(void)setWarningDuration:(double)arg1 ;
-(unsigned long long)startPolicy;
-(void)setStartPolicy:(unsigned long long)arg1 ;
-(void)setSuspendsOnOriginatorSuspension:(BOOL)arg1 ;
-(void)setDefinesRelativeStartTime:(BOOL)arg1 ;
-(void)setLegacyReason:(unsigned long long)arg1 ;
-(BOOL)definesRelativeStartTime;
-(BOOL)invalidatesSynchronously;
-(BOOL)suspendsOnOriginatorSuspension;
-(NSMutableSet *)sourceEnvironments;
-(unsigned long long)runningReason;
-(void)setRunningReason:(unsigned long long)arg1 ;
-(unsigned long long)legacyReason;
-(NSString *)domainAttributes;
-(void)setDomainAttributes:(NSString *)arg1 ;
-(void)setInvalidatesSynchronously:(BOOL)arg1 ;
-(BOOL)hasHereditaryGrant;
-(void)setHasHereditaryGrant:(BOOL)arg1 ;
-(BOOL)hasDomainAttribute;
-(void)setHasDomainAttribute:(BOOL)arg1 ;
-(BOOL)terminateTargetOnOriginatorExit;
-(void)setTerminateTargetOnOriginatorExit:(BOOL)arg1 ;
@end

