/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <USDKit/USDKit-Structs.h>
@interface USKObjectPath : NSObject {

	SdfPath _path;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)stringValue;
-(id)initWithString:(id)arg1 ;
-(SdfPath)path;
-(id)initWithToken:(id)arg1 ;
-(id)propertyName;
-(id)pathByAppendingPropertyComponent:(id)arg1 ;
-(id)initWithSdfPath:(SdfPath)arg1 ;
-(id)tokenValue;
-(BOOL)isNodePath;
-(id)nodePath;
-(BOOL)isPropertyPath;
@end

