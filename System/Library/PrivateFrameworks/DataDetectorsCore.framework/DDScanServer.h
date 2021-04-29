/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataDetectorsCore/DDScannerService.h>

@interface DDScanServer : DDScannerService {

	long long _options;
	double _timeout;

}

@property (assign,nonatomic) long long options;              //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) double timeout;                 //@synthesize timeout=_timeout - In the implementation block
-(id)init;
-(void)setTimeout:(double)arg1 ;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(double)timeout;
-(id)scanString:(id)arg1 ;
-(void)scanString:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
@end

