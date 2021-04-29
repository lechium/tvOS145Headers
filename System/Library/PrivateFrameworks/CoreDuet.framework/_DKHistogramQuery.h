/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDuet/_DKQuery.h>
#import <libobjc.A.dylib/_DKExecutableQuery.h>

@class _DKEventStream, NSDateInterval, NSString, NSPredicate, NSArray;

@interface _DKHistogramQuery : _DKQuery <_DKExecutableQuery> {

	BOOL _includeLocalResults;
	BOOL _includeRemoteResults;
	_DKEventStream* _stream;
	NSDateInterval* _interval;
	/*^block*/id _histogramHandler;
	NSString* _customIdentifier;
	unsigned long long _minimumOccurrencesForInclusion;
	NSPredicate* _predicate;
	NSArray* _valueKeyPaths;
	long long _remoteHistogramLimit;

}

@property (assign,nonatomic) BOOL includeLocalResults;                                       //@synthesize includeLocalResults=_includeLocalResults - In the implementation block
@property (assign,nonatomic) BOOL includeRemoteResults;                                      //@synthesize includeRemoteResults=_includeRemoteResults - In the implementation block
@property (assign,nonatomic) unsigned long long minimumOccurrencesForInclusion;              //@synthesize minimumOccurrencesForInclusion=_minimumOccurrencesForInclusion - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                                        //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * valueKeyPaths;                                        //@synthesize valueKeyPaths=_valueKeyPaths - In the implementation block
@property (assign,nonatomic) long long remoteHistogramLimit;                                 //@synthesize remoteHistogramLimit=_remoteHistogramLimit - In the implementation block
@property (nonatomic,readonly) _DKEventStream * stream; 
@property (nonatomic,readonly) NSDateInterval * interval; 
@property (nonatomic,copy) id histogramHandler;                                              //@synthesize histogramHandler=_histogramHandler - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)histogramQueryForStream:(id)arg1 interval:(id)arg2 withPredicate:(id)arg3 ;
+(id)histogramQueryForStream:(id)arg1 interval:(id)arg2 ;
+(id)histogramQueryForStream:(id)arg1 interval:(id)arg2 predicate:(id)arg3 valueKeyPaths:(id)arg4 ;
+(id)histogramQueryForPersistedHistogramsForStream:(id)arg1 withCustomIdentifier:(id)arg2 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSDateInterval *)interval;
-(_DKEventStream *)stream;
-(id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2 ;
-(id)handleResults:(id)arg1 error:(id)arg2 ;
-(void)setValueKeyPaths:(NSArray *)arg1 ;
-(void)setIncludeLocalResults:(BOOL)arg1 ;
-(NSArray *)valueKeyPaths;
-(BOOL)includeLocalResults;
-(BOOL)includeRemoteResults;
-(long long)remoteHistogramLimit;
-(id)histogramHandler;
-(void)setHistogramHandler:(id)arg1 ;
-(void)setIncludeRemoteResults:(BOOL)arg1 ;
-(unsigned long long)minimumOccurrencesForInclusion;
-(void)setMinimumOccurrencesForInclusion:(unsigned long long)arg1 ;
-(void)setRemoteHistogramLimit:(long long)arg1 ;
@end

