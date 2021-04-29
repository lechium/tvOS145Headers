/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface TSTimeErrorSequence : NSObject {

	NSArray* _timeErrors;

}

@property (nonatomic,copy,readonly) NSArray * timeErrors;              //@synthesize timeErrors=_timeErrors - In the implementation block
+(id)timeErrorSequenceWithTimestamps:(unsigned long long*)arg1 timeError:(long long*)arg2 count:(long long)arg3 ;
-(NSArray *)timeErrors;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg1 withFilename:(id)arg2 ;
-(id)generatePythonScriptWithOutputPath:(id)arg1 fileName:(id)arg2 titleName:(id)arg3 plotPath:(id)arg4 showPlot:(BOOL)arg5 ;
-(BOOL)exportTimeErrorsToDirectoryURL:(id)arg1 ;
-(id)initWithTimeErrors:(id)arg1 ;
@end
