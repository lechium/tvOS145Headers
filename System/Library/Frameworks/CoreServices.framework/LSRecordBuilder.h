/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _LSDatabase;

@interface LSRecordBuilder : NSObject {

	_LSDatabase* _db;

}
+(id)recordBuilderForType:(unsigned long long)arg1 ;
-(void)setDatabase:(id)arg1 ;
-(void)parseiTunesMetadata:(id)arg1 ;
-(BOOL)parseInfoPlist:(id)arg1 ;
-(BOOL)parseInstallationInfo:(id)arg1 ;
-(unsigned)registerBundleRecord:(id)arg1 error:(id*)arg2 ;
@end

