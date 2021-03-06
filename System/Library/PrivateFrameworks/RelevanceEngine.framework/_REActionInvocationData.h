/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface _REActionInvocationData : NSObject {

	BOOL _remote;
	NSDate* _date;
	unsigned long long _count;

}

@property (nonatomic,retain) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL remote;                           //@synthesize remote=_remote - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(unsigned long long)count;
-(NSDate *)date;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)remote;
-(void)setRemote:(BOOL)arg1 ;
@end

