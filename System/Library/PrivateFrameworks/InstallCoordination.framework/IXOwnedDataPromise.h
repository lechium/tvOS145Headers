/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <InstallCoordination/IXDataPromise.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, IXOwnedDataPromiseSeed;

@interface IXOwnedDataPromise : IXDataPromise <NSSecureCoding> {

	NSURL* _stagedPath;

}

@property (nonatomic,retain) IXOwnedDataPromiseSeed * seed; 
@property (nonatomic,retain) NSURL * stagedPath;                         //@synthesize stagedPath=_stagedPath - In the implementation block
@property (nonatomic,readonly) NSURL * stagingBaseDir; 
-(NSURL *)stagingBaseDir;
-(void)setStagedPath:(NSURL *)arg1 ;
-(Class)seedClass;
-(NSURL *)stagedPath;
@end

