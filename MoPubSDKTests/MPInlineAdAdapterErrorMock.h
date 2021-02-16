//
//  MPInlineAdAdapterErrorMock.h
//
//  Copyright 2018-2021 Twitter, Inc.
//  Licensed under the MoPub SDK License Agreement
//  http://www.mopub.com/legal/sdk-license-agreement/
//

#import <Foundation/Foundation.h>
#import "MPInlineAdAdapter.h"

@interface MPInlineAdAdapterErrorMock : MPInlineAdAdapter

- (void)requestAdWithSize:(CGSize)size adapterInfo:(NSDictionary *)info adMarkup:(NSString *)adMarkup;

@end
