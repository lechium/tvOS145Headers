/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IMUnitTestLogger;

@interface IMUnitTestBundleLoader : NSObject {

	IMUnitTestLogger* _logger;

}

@property (readonly) IMUnitTestLogger * logger;              //@synthesize logger=_logger - In the implementation block
-(IMUnitTestLogger *)logger;
-(id)initWithLogger:(id)arg1 ;
-(BOOL)loadTestBundle:(id)arg1 bundle:(id*)arg2 error:(id*)arg3 ;
@end

