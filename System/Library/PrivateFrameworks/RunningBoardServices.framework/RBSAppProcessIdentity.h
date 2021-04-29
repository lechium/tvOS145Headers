/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoardServices/RBSProcessIdentity.h>

@class NSString;

@interface RBSAppProcessIdentity : RBSProcessIdentity {

	NSString* _embeddedApplicationIdentifier;
	NSString* _applicationJobLabel;

}
-(id)debugDescription;
-(id)embeddedApplicationIdentifier;
-(BOOL)isApplication;
-(BOOL)isAnonymous;
-(id)applicationJobLabel;
-(id)encodeForJob;
-(unsigned char)defaultManageFlags;
-(id)copyWithEuid:(unsigned)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(BOOL)_matchesIdentity:(id)arg1 ;
-(id)_initAppWithLabel:(id)arg1 bundleID:(id)arg2 euid:(unsigned)arg3 platform:(int)arg4 ;
@end

