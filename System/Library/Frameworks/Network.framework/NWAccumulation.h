/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Network/Network-Structs.h>
@class NSString, NSMutableDictionary;

@interface NWAccumulation : NSObject {

	os_unfair_lock_s _lock;
	BOOL _isSnapshot;
	NSString* _name;
	NSMutableDictionary* _durations;
	NSString* _currentState;
	double _lastUpdateTime;

}

@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * durations;              //@synthesize durations=_durations - In the implementation block
@property (nonatomic,retain) NSString * currentState;                      //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) double lastUpdateTime;                        //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (assign,nonatomic) BOOL isSnapshot;                              //@synthesize isSnapshot=_isSnapshot - In the implementation block
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)reset;
-(NSString *)currentState;
-(void)setDurations:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)durations;
-(id)snapshot;
-(void)setCurrentState:(NSString *)arg1 ;
-(double)lastUpdateTime;
-(void)setLastUpdateTime:(double)arg1 ;
-(BOOL)isSnapshot;
-(void)updateWithState:(id)arg1 atTime:(double)arg2 ;
-(void)setIsSnapshot:(BOOL)arg1 ;
@end

