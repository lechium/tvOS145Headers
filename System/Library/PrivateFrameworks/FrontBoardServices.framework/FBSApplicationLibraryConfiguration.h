/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBSApplicationLibraryConfiguration : NSObject <NSCopying> {

	Class _applicationInfoClass;
	Class _applicationPlaceholderClass;
	BOOL _allowConcurrentLoading;
	/*^block*/id _installedApplicationFilter;
	/*^block*/id _placeholderFilter;

}

@property (nonatomic,retain) Class applicationInfoClass;                     //@synthesize applicationInfoClass=_applicationInfoClass - In the implementation block
@property (nonatomic,retain) Class applicationPlaceholderClass;              //@synthesize applicationPlaceholderClass=_applicationPlaceholderClass - In the implementation block
@property (assign,nonatomic) BOOL allowConcurrentLoading;                    //@synthesize allowConcurrentLoading=_allowConcurrentLoading - In the implementation block
@property (nonatomic,copy) id installedApplicationFilter;                    //@synthesize installedApplicationFilter=_installedApplicationFilter - In the implementation block
@property (nonatomic,copy) id placeholderFilter;                             //@synthesize placeholderFilter=_placeholderFilter - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(Class)applicationInfoClass;
-(Class)applicationPlaceholderClass;
-(id)installedApplicationFilter;
-(id)placeholderFilter;
-(BOOL)allowConcurrentLoading;
-(void)setApplicationInfoClass:(Class)arg1 ;
-(void)setApplicationPlaceholderClass:(Class)arg1 ;
-(void)setAllowConcurrentLoading:(BOOL)arg1 ;
-(void)setInstalledApplicationFilter:(id)arg1 ;
-(void)setPlaceholderFilter:(id)arg1 ;
@end

