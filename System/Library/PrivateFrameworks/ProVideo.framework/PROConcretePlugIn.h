/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PROPlugIn.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PROPlugInDelegate, PKPlugIn;
@class NSBundle, NSDictionary, PROPlugInGroup, NSString, NSURL;

@interface PROConcretePlugIn : PROPlugIn <NSCopying> {

	NSBundle* bundle;
	CFUUIDRef uuidRef;
	NSDictionary* infoDictionary;
	PROPlugInGroup* group;
	NSString* localizationTableName;
	NSURL* helpURL;
	id sharedInstance;
	struct {
		unsigned loadedInstanceEver : 1;
		unsigned checkedForIcon : 1;
		unsigned checkedForHelp : 1;
	}  plugInFlags;
	id<PROPlugInDelegate> delegate;
	id<PKPlugIn> pluginKitPlug;
	BOOL entirelyOutOfProcess;
	BOOL _isBlocked;
	NSString* _blockedLookupKey;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)version;
-(id)infoDictionary;
-(id)bundle;
-(id)group;
-(id)displayName;
-(id)className;
-(CFUUIDRef)uuid;
-(id)vendorName;
-(BOOL)isBlocked;
-(void)setIsBlocked:(BOOL)arg1 ;
-(id)uuidString;
-(void)reportError:(id)arg1 ;
-(Class)plugInClass;
-(id)plugInInstance;
-(id)pluginKitPlug;
-(id)implementedProtocols;
-(id)blockedLookupKey;
-(BOOL)isEqualToPlugIn:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 ;
-(void)setBlockedLookupKey:(id)arg1 pluginName:(id)arg2 version:(id)arg3 ;
-(id)sharedPlugInInstance;
-(id)helpURL;
-(id)apiUsedByPlugInForProtocol:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 pluginKitPlug:(id)arg4 ;
-(id)infoString;
@end

