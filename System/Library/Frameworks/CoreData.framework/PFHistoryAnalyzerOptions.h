/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PFHistoryAnalyzerOptions : NSObject <NSCopying> {

	BOOL _automaticallyPruneTransientRecords;
	unsigned long long _transactionLimit;

}

@property (assign,nonatomic) BOOL automaticallyPruneTransientRecords;              //@synthesize automaticallyPruneTransientRecords=_automaticallyPruneTransientRecords - In the implementation block
@property (assign,nonatomic) unsigned long long transactionLimit;                  //@synthesize transactionLimit=_transactionLimit - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)automaticallyPruneTransientRecords;
-(void)setAutomaticallyPruneTransientRecords:(BOOL)arg1 ;
-(unsigned long long)transactionLimit;
-(void)setTransactionLimit:(unsigned long long)arg1 ;
@end

