/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface UINib : NSObject {

	id storage;

}
+(id)nibWithNibName:(id)arg1 bundle:(id)arg2 ;
+(id)nibWithData:(id)arg1 bundle:(id)arg2 ;
-(void)dealloc;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(id)effectiveBundle;
-(id)instantiateWithOwner:(id)arg1 options:(id)arg2 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(id)initWithNibName:(id)arg1 directory:(id)arg2 bundle:(id)arg3 ;
-(id)identifierForStringsFile;
-(void)setIdentifierForStringsFile:(id)arg1 ;
-(BOOL)instantiatingForSimulator;
-(void)setInstantiatingForSimulator:(BOOL)arg1 ;
-(BOOL)captureImplicitLoadingContextOnDecode;
-(void)setCaptureImplicitLoadingContextOnDecode:(BOOL)arg1 ;
-(void)_registerForMemoryWarningIfNeeded;
-(id)nibDataForPath:(id)arg1 ;
-(id)initWithData:(id)arg1 bundle:(id)arg2 ;
-(id)bundleResourcePath;
-(id)lazyArchiveData;
-(id)unarchiverForInstantiatingReturningError:(id*)arg1 ;
-(BOOL)captureEnclosingNIBBundleOnDecode;
-(void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)arg1 ;
@end

