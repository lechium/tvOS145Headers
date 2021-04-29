/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SHLibraryGroup, SHGroupMO;

@interface SHLibraryGroupLocalGroupPair : NSObject {

	SHLibraryGroup* _libraryGroup;
	SHGroupMO* _localGroup;

}

@property (nonatomic,readonly) SHLibraryGroup * libraryGroup;              //@synthesize libraryGroup=_libraryGroup - In the implementation block
@property (nonatomic,readonly) SHGroupMO * localGroup;                     //@synthesize localGroup=_localGroup - In the implementation block
-(SHGroupMO *)localGroup;
-(id)initWithLibraryGroup:(id)arg1 localGroup:(id)arg2 ;
-(SHLibraryGroup *)libraryGroup;
@end

