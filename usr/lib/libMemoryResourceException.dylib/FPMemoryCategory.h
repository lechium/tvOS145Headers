/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libMemoryResourceException.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FPMemoryObject, NSString;

@interface FPMemoryCategory : NSObject {

	BOOL _isSummary;
	int _totalRegions;
	unsigned long long _totalDirtySize;
	unsigned long long _totalSwappedSize;
	unsigned long long _totalCleanSize;
	unsigned long long _totalReclaimableSize;
	unsigned long long _totalWiredSize;
	FPMemoryObject* _firstMemoryObject;

}

@property (nonatomic,retain) FPMemoryObject * firstMemoryObject;                   //@synthesize firstMemoryObject=_firstMemoryObject - In the implementation block
@property (assign,nonatomic) unsigned long long totalDirtySize;                    //@synthesize totalDirtySize=_totalDirtySize - In the implementation block
@property (assign,nonatomic) unsigned long long totalSwappedSize;                  //@synthesize totalSwappedSize=_totalSwappedSize - In the implementation block
@property (assign,nonatomic) unsigned long long totalCleanSize;                    //@synthesize totalCleanSize=_totalCleanSize - In the implementation block
@property (assign,nonatomic) unsigned long long totalReclaimableSize;              //@synthesize totalReclaimableSize=_totalReclaimableSize - In the implementation block
@property (assign,nonatomic) unsigned long long totalWiredSize;                    //@synthesize totalWiredSize=_totalWiredSize - In the implementation block
@property (assign,nonatomic) int totalRegions;                                     //@synthesize totalRegions=_totalRegions - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * detailedName; 
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) BOOL verbose; 
-(NSString *)name;
-(id)init;
-(NSString *)fullName;
-(BOOL)verbose;
-(unsigned long long)totalDirtySize;
-(unsigned long long)totalSwappedSize;
-(id)initSummary:(BOOL)arg1 ;
-(NSString *)detailedName;
-(unsigned long long)totalCleanSize;
-(unsigned long long)totalReclaimableSize;
-(unsigned long long)totalWiredSize;
-(void)addMemoryObject:(id)arg1 ;
-(void)setTotalDirtySize:(unsigned long long)arg1 ;
-(void)setTotalSwappedSize:(unsigned long long)arg1 ;
-(void)setTotalCleanSize:(unsigned long long)arg1 ;
-(void)setTotalReclaimableSize:(unsigned long long)arg1 ;
-(void)setTotalWiredSize:(unsigned long long)arg1 ;
-(int)totalRegions;
-(void)setTotalRegions:(int)arg1 ;
-(FPMemoryObject *)firstMemoryObject;
-(void)setFirstMemoryObject:(FPMemoryObject *)arg1 ;
@end

